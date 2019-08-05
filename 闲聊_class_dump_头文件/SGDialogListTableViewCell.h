//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGTableViewCellBase.h"

@class NSString, SGDialogs, SGVipLevelImageView, UIImageView, UILabel, UIView;

@interface SGDialogListTableViewCell : SGTableViewCellBase
{
    _Bool _changeBackColorBySticky;
    SGDialogs *_dialog;
    UIView *_topLine;
    double _oldTextSize;
    UIImageView *_avatarView;
    UIImageView *_multichatImageView;
    UILabel *_dateLabel;
    UILabel *_unreadCountLabel;
    UIImageView *_muteIcon;
    UIImageView *_burnIcon;
    UILabel *_titleLabel;
    NSString *_dateString;
    UILabel *_msgTextLabel;
    UIImageView *_mediaIconImageView;
    SGVipLevelImageView *_levelImageView;
    UIImageView *_interstLogoImageView;
}

@property(retain, nonatomic) UIImageView *interstLogoImageView; // @synthesize interstLogoImageView=_interstLogoImageView;
@property(retain, nonatomic) SGVipLevelImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) UIImageView *mediaIconImageView; // @synthesize mediaIconImageView=_mediaIconImageView;
@property(retain, nonatomic) UILabel *msgTextLabel; // @synthesize msgTextLabel=_msgTextLabel;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *burnIcon; // @synthesize burnIcon=_burnIcon;
@property(nonatomic) __weak UIImageView *muteIcon; // @synthesize muteIcon=_muteIcon;
@property(nonatomic) __weak UILabel *unreadCountLabel; // @synthesize unreadCountLabel=_unreadCountLabel;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UIImageView *multichatImageView; // @synthesize multichatImageView=_multichatImageView;
@property(nonatomic) __weak UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double oldTextSize; // @synthesize oldTextSize=_oldTextSize;
@property(nonatomic) _Bool changeBackColorBySticky; // @synthesize changeBackColorBySticky=_changeBackColorBySticky;
@property(nonatomic) __weak UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) SGDialogs *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)refershIcon:(id)arg1;
- (void)setTextViewFont;
- (void)layoutSubviews;
- (id)setmsgTtxt:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellStyle;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

