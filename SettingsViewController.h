//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class CustomTextField, CustomTextView, MBProgressHUD, NSArray, NSString, RCSwitchClone, UIButton, UIImageView, UIScrollView, UIView;

@interface SettingsViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>
{
    UIScrollView *mainScrollView;
    UIView *childView;
    RCSwitchClone *rcSwitch;
    RCSwitchClone *rcSwitchProfilePrivate;
    UIImageView *avatarImageView;
    CustomTextField *textFieldUsername;
    CustomTextField *textFieldName;
    CustomTextField *textFieldLocation;
    CustomTextField *textFieldNewPass;
    CustomTextField *textFieldNewPassAgain;
    CustomTextField *textFieldEmail;
    CustomTextView *textViewAboutMe;
    UIButton *buttonChangeName;
    UIButton *buttonRefresh;
    UIButton *buttonDone;
    UIImageView *imageTextViewBackground;
    MBProgressHUD *hud;
    NSArray *descriptionLabels;
    RCSwitchClone *_rcSwitchWebGifs;
    RCSwitchClone *_rcSwitchReceivePM;
    struct CGSize scrollContentSize;
}

@property(nonatomic) __weak RCSwitchClone *rcSwitchReceivePM; // @synthesize rcSwitchReceivePM=_rcSwitchReceivePM;
@property(nonatomic) __weak RCSwitchClone *rcSwitchWebGifs; // @synthesize rcSwitchWebGifs=_rcSwitchWebGifs;
@property(retain, nonatomic) NSArray *descriptionLabels; // @synthesize descriptionLabels;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud;
@property(nonatomic) __weak UIImageView *imageTextViewBackground; // @synthesize imageTextViewBackground;
@property(nonatomic) __weak UIButton *buttonDone; // @synthesize buttonDone;
@property(nonatomic) __weak UIButton *buttonRefresh; // @synthesize buttonRefresh;
@property(nonatomic) __weak UIButton *buttonChangeName; // @synthesize buttonChangeName;
@property(nonatomic) __weak CustomTextView *textViewAboutMe; // @synthesize textViewAboutMe;
@property(nonatomic) __weak CustomTextField *textFieldEmail; // @synthesize textFieldEmail;
@property(nonatomic) __weak CustomTextField *textFieldNewPassAgain; // @synthesize textFieldNewPassAgain;
@property(nonatomic) __weak CustomTextField *textFieldNewPass; // @synthesize textFieldNewPass;
@property(nonatomic) __weak CustomTextField *textFieldLocation; // @synthesize textFieldLocation;
@property(nonatomic) __weak CustomTextField *textFieldName; // @synthesize textFieldName;
@property(nonatomic) __weak CustomTextField *textFieldUsername; // @synthesize textFieldUsername;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView;
@property(nonatomic) __weak RCSwitchClone *rcSwitchProfilePrivate; // @synthesize rcSwitchProfilePrivate;
@property(nonatomic) __weak RCSwitchClone *rcSwitch; // @synthesize rcSwitch;
@property(nonatomic) __weak UIView *childView; // @synthesize childView;
@property(nonatomic) __weak UIScrollView *mainScrollView; // @synthesize mainScrollView;
@property(nonatomic) struct CGSize scrollContentSize; // @synthesize scrollContentSize;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)changeScrollViewContentToBig:(BOOL)arg1;
- (void)scrollViewToTextInput:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideKeyboard;
- (void)resignResponders;
- (void)requestFailed:(id)arg1;
- (void)downloadSettingsForToken:(id)arg1;
- (void)sendNewUsernameWithToken:(id)arg1;
- (void)sendSettingsForToken:(id)arg1;
- (void)showSuccessHUDWithText:(id)arg1 timeout:(int)arg2;
- (void)dismissHUD:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)getPhoto:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)buttonAvatarClicked:(id)arg1;
- (void)buttonRefreshClicked:(id)arg1;
- (void)buttonChangeUsernameClicked:(id)arg1;
- (void)buttonDoneClicked:(id)arg1;
- (void)backClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

