//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ListViewCell : UITableViewCell
{
    UIImageView *imageView;
    UILabel *likesLabel;
    UILabel *commentsLabel;
    UILabel *viewsLabel;
    UIView *statsView;
    UIView *_phoneSourceView;
}

@property(nonatomic) __weak UIView *phoneSourceView; // @synthesize phoneSourceView=_phoneSourceView;
@property(nonatomic) __weak UIView *statsView; // @synthesize statsView;
@property(nonatomic) __weak UILabel *viewsLabel; // @synthesize viewsLabel;
@property(nonatomic) __weak UILabel *commentsLabel; // @synthesize commentsLabel;
@property(nonatomic) __weak UILabel *likesLabel; // @synthesize likesLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
