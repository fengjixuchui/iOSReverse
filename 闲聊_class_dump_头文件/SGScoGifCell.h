//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FLAnimatedImageView, SGScoGifInfoModel, UIImageView, UILabel, _TtC8xianliao14SGStickerImage;
@protocol ScoGifCellDelegate;

@interface SGScoGifCell : UICollectionViewCell
{
    SGScoGifInfoModel *_model;
    id <ScoGifCellDelegate> _cellDelegate;
    _TtC8xianliao14SGStickerImage *_stickerImage;
    FLAnimatedImageView *_gifImageView;
    UIImageView *_failedIconView;
    UILabel *_nameLabel;
}

+ (id)cellWithCollectionView:(id)arg1 indexPath:(id)arg2 isEmojiShop:(_Bool)arg3;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *failedIconView; // @synthesize failedIconView=_failedIconView;
@property(retain, nonatomic) FLAnimatedImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) _TtC8xianliao14SGStickerImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(nonatomic) id <ScoGifCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) SGScoGifInfoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)longPressImageView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

