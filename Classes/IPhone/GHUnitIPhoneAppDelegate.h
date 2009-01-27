//
//  GHUnitIPhoneAppDelegate.h
//  GHUnitIPhone
//
//  Created by Gabriel Handford on 1/25/09.
//  Copyright 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GHUnit.h"

@class GHUnitIPhoneViewController;

@interface GHUnitIPhoneAppDelegate : NSObject <UIApplicationDelegate, GHTestRunnerDelegate> {
    UIWindow *window_;
    GHUnitIPhoneViewController *viewController_;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
