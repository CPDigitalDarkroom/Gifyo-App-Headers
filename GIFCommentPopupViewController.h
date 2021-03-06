//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AnimatedGifDelegate.h"

@class CommentsViewController, ConversationViewController, GIFObject, NSString, UIImageView, UIProgressView;

@interface GIFCommentPopupViewController : UIViewController <AnimatedGifDelegate>
{
    UIImageView *_imageView;
    GIFObject *_gifObject;
    UIProgressView *_progressView;
    CommentsViewController *_commentsViewController;
    ConversationViewController *_conversationViewController;
}

@property(nonatomic) __weak ConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(nonatomic) __weak CommentsViewController *commentsViewController; // @synthesize commentsViewController=_commentsViewController;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak GIFObject *gifObject; // @synthesize gifObject=_gifObject;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismissProgressIndicator;
- (void)progressUpdate:(float)arg1;
- (void)animatedGifRequestFinished;
- (void)backPressed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

