#!/bin/bash

[ -n "${CONFIGURATION_BUILD_DIR}" ] || { echo "Run from Xcode"; exit 1; }

DEST="${CONFIGURATION_BUILD_DIR}/GHUnitIOS"

mkdir -p "${DEST}"

find "${PROJECT_DIR}/.." -type d -name Examples -prune \
  -o -type d -name Tests -prune \
  -o -type d -name build -prune \
  -o -name '*.h' -print0 | xargs -0 -I{} rsync -avz {} "${DEST}"
