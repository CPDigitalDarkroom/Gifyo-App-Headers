//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AnimatedGifDelegate.h"
#import "UITextViewDelegate.h"

@class CustomTextView, GIFObject, MBProgressHUD, NSString, UIImageView, UILabel, UIProgressView, UIScrollView;

@interface EditGIFViewController : UIViewController <UITextViewDelegate, AnimatedGifDelegate>
{
    UIImageView *_imageView;
    CustomTextView *_textView;
    UIScrollView *_scrollView;
    UILabel *_editBlobLabel;
    GIFObject *_gifObject;
    UIProgressView *_progressView;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak GIFObject *gifObject; // @synthesize gifObject=_gifObject;
@property(nonatomic) __weak UILabel *editBlobLabel; // @synthesize editBlobLabel=_editBlobLabel;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak CustomTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismissProgressIndicator;
- (void)progressUpdate:(float)arg1;
- (void)animatedGifRequestFinished;
- (void)changeScrollViewContentToBig:(BOOL)arg1;
- (void)scrollViewToTextInput:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideKeyboard;
- (void)showSuccessHUDWithText:(id)arg1 timeout:(int)arg2;
- (void)dismissHUD:(id)arg1;
- (void)backPressed:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)deletePressed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

