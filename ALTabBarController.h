//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ALTabBarDelegate.h"

@class ALTabBar, NSArray, NSString, UIView;

@interface ALTabBarController : UIViewController <ALTabBarDelegate>
{
    id <ALTabBarControllerDelegate> _delegate;
    NSArray *_viewControllers;
    int _selectedIndex;
    int _tabBarHeight;
    int _tabBarButtonsSpacing;
    int _tabBarButtonsPadding;
    int _animationDirection;
    int _animationType;
    int _tabBarLayoutMode;
    double _showAnimationDuration;
    double _hideAnimationDuration;
    BOOL _rotationEnabled;
    ALTabBar *_tabBar;
    UIView *_contentView;
    BOOL _animatingTabBar;
    int _animatingDirection;
}

@property BOOL rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property double hideAnimationDuration; // @synthesize hideAnimationDuration=_hideAnimationDuration;
@property double showAnimationDuration; // @synthesize showAnimationDuration=_showAnimationDuration;
@property int animationType; // @synthesize animationType=_animationType;
@property int animatingDirection; // @synthesize animatingDirection=_animatingDirection;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) id <ALTabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int tabBarButtonsPadding; // @synthesize tabBarButtonsPadding=_tabBarButtonsPadding;
@property(nonatomic) int tabBarButtonsSpacing; // @synthesize tabBarButtonsSpacing=_tabBarButtonsSpacing;
@property(nonatomic) int tabBarHeight; // @synthesize tabBarHeight=_tabBarHeight;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (BOOL)isFakeViewControllerAtIndex:(int)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)isTabBarHidden;
- (void)toggleTabBarVisibleAnimated:(BOOL)arg1;
- (void)hideTabBarAnimated:(BOOL)arg1;
- (void)showTabBarAnimated:(BOOL)arg1;
- (void)setTabBarLayoutMode:(int)arg1;
- (void)setTabBarItems:(id)arg1;
- (void)setTabBarBackgroundContentMode:(int)arg1;
- (void)setTabBarBackgroundColor:(id)arg1;
- (void)setTabBarBackgroundImage:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBadgeCount:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

