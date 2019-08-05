//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDeatilBaseCell.h"

@class UIImageView, UILabel, YYLabel;

@interface SGDialogMessageLinkCell : SGDialogDeatilBaseCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    YYLabel *_linkLabel;
    UIImageView *_linkImageView;
}

@property(retain, nonatomic) UIImageView *linkImageView; // @synthesize linkImageView=_linkImageView;
@property(retain, nonatomic) YYLabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)awakeFromNib;

@end

