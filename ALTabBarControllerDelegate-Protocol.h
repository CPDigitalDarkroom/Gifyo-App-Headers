//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALTabBarController;

@protocol ALTabBarControllerDelegate <NSObject>

@optional
- (void)tabBarControllerDidDisappearTabBar:(ALTabBarController *)arg1;
- (void)tabBarControllerDidAppearTabBar:(ALTabBarController *)arg1;
- (void)tabBarController:(ALTabBarController *)arg1 didSelectButtonAtIndex:(int)arg2;
@end

