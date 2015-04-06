//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CommentsViewController, ConversationViewController, Item, NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel, UISwipeGestureRecognizer, UIView;

@interface NotificationsViewCell : UITableViewCell
{
    Item *thisItem;
    NSString *text;
    UISwipeGestureRecognizer *gesture;
    UIView *viewWithImage;
    UIImageView *picture;
    UIImageView *imageGo;
    UIImageView *separatorTop;
    UIImageView *separatorBottom;
    UIButton *deleteButton;
    TTTAttributedLabel *description;
    UILabel *labelDate;
    UIView *gifCommentView;
    UIImageView *gifCommentImageView;
    NSString *summaryText;
    id <DeleteDelegate> deleteDelegate;
    CommentsViewController *commentsViewController;
    ConversationViewController *conversationViewController;
}

+ (float)heightForCellWithItem:(id)arg1;
@property(nonatomic) __weak ConversationViewController *conversationViewController; // @synthesize conversationViewController;
@property(nonatomic) __weak CommentsViewController *commentsViewController; // @synthesize commentsViewController;
@property(nonatomic) __weak id <DeleteDelegate> deleteDelegate; // @synthesize deleteDelegate;
@property(retain, nonatomic) NSString *summaryText; // @synthesize summaryText;
@property(nonatomic) __weak UIImageView *gifCommentImageView; // @synthesize gifCommentImageView;
@property(nonatomic) __weak UIView *gifCommentView; // @synthesize gifCommentView;
@property(nonatomic) __weak UILabel *labelDate; // @synthesize labelDate;
@property(nonatomic) __weak TTTAttributedLabel *description; // @synthesize description;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic) __weak UIImageView *separatorBottom; // @synthesize separatorBottom;
@property(nonatomic) __weak UIImageView *separatorTop; // @synthesize separatorTop;
@property(nonatomic) __weak UIImageView *imageGo; // @synthesize imageGo;
@property(nonatomic) __weak UIImageView *picture; // @synthesize picture;
@property(nonatomic) __weak UIView *viewWithImage; // @synthesize viewWithImage;
@property(retain, nonatomic) UISwipeGestureRecognizer *gesture; // @synthesize gesture;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) __weak Item *thisItem; // @synthesize thisItem;
- (void).cxx_destruct;
- (void)gifCommentPressed:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)avatarPressed:(id)arg1;
- (void)setSelectedLinkInLabelDelegate:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDescriptionTextWithBold:(id)arg1 normal:(id)arg2 shouldDim:(BOOL)arg3 withColor:(id)arg4;
- (void)toggleArchiveButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didSwipe:(id)arg1;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

