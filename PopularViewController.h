//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GridViewController, MBProgressHUD, NSMutableArray, PreviewViewController, UIButton, UIImageView, UIView;

@interface PopularViewController : UIViewController
{
    BOOL fetching;
    UIImageView *navigationLabelImageView;
    NSMutableArray *GOArray;
    MBProgressHUD *hud;
    int currentScreen;
    PreviewViewController *pvc;
    UIView *detailView;
    GridViewController *gvc;
    UIButton *trendingButton;
    UIButton *latestButton;
}

@property(nonatomic) BOOL fetching; // @synthesize fetching;
@property(nonatomic) __weak UIButton *latestButton; // @synthesize latestButton;
@property(nonatomic) __weak UIButton *trendingButton; // @synthesize trendingButton;
@property(retain, nonatomic) GridViewController *gvc; // @synthesize gvc;
@property(nonatomic) __weak UIView *detailView; // @synthesize detailView;
@property(nonatomic) __weak PreviewViewController *pvc; // @synthesize pvc;
@property(nonatomic) int currentScreen; // @synthesize currentScreen;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud;
@property(retain, nonatomic) NSMutableArray *GOArray; // @synthesize GOArray;
@property(nonatomic) __weak UIImageView *navigationLabelImageView; // @synthesize navigationLabelImageView;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)restartView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)fetchThumbnails:(BOOL)arg1;
- (void)dismissHUD:(id)arg1;
- (void)parseResults:(id)arg1;
- (void)refresh;
- (void)refreshButtonPressed:(id)arg1;
- (void)trendingButtonPressed:(id)arg1;
- (void)latestButtonPressed:(id)arg1;

@end

