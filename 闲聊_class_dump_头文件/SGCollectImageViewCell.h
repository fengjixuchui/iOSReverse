//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGCollectViewCell.h"

@class UIImageView, UILabel;

@interface SGCollectImageViewCell : SGCollectViewCell
{
    UIImageView *_senderIcon;
    UILabel *_senderNameLabel;
    UILabel *_collectTimeLabel;
    UIImageView *_contentImageView;
}

@property(nonatomic) __weak UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak UILabel *collectTimeLabel; // @synthesize collectTimeLabel=_collectTimeLabel;
@property(nonatomic) __weak UILabel *senderNameLabel; // @synthesize senderNameLabel=_senderNameLabel;
@property(nonatomic) __weak UIImageView *senderIcon; // @synthesize senderIcon=_senderIcon;
- (void).cxx_destruct;
- (id)getSubImage:(id)arg1 mCGRect:(struct CGRect)arg2 centerBool:(_Bool)arg3;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

