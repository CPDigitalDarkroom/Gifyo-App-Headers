//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITextFieldDelegate.h"

@class GIFCommentPopupViewController, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView, UITextField, UIView;

@interface ConversationViewController : UIViewController <UITextFieldDelegate, TTTAttributedLabelDelegate>
{
    UIActivityIndicatorView *activityIndicator;
    UIButton *buttonSend;
    UIView *toolbarOnKeyboard;
    UITableView *tableView;
    UITextField *textFieldInput;
    NSMutableArray *conversation;
    UILabel *labelTitle;
    UIImageView *imageTag;
    NSString *userToken;
    NSString *friendId;
    NSString *name;
    GIFCommentPopupViewController *popupViewController;
}

@property(retain, nonatomic) GIFCommentPopupViewController *popupViewController; // @synthesize popupViewController;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *friendId; // @synthesize friendId;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken;
@property(nonatomic) __weak UIImageView *imageTag; // @synthesize imageTag;
@property(nonatomic) __weak UILabel *labelTitle; // @synthesize labelTitle;
@property(retain, nonatomic) NSMutableArray *conversation; // @synthesize conversation;
@property(nonatomic) __weak UITextField *textFieldInput; // @synthesize textFieldInput;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UIView *toolbarOnKeyboard; // @synthesize toolbarOnKeyboard;
@property(nonatomic) __weak UIButton *buttonSend; // @synthesize buttonSend;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithTextCheckingResult:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)sendMessageWithText:(id)arg1;
- (void)downloadConversation;
- (void)setTitleWithText:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initConversationWithToken:(id)arg1 friendID:(id)arg2 friendName:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clickOnBack:(id)arg1;
- (void)clickOnSend:(id)arg1;
- (void)gifItemPressed:(id)arg1;
- (void)gifMessagePressed:(id)arg1;
- (void)gifPopupBackPressed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

