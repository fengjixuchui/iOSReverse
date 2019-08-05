//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGMergerMessageBaseCell.h"

@class SGDialogs, SGMergerMessageDetailModel, UIActivityIndicatorView, UIImageView, UILabel, UIView;
@protocol SGMergerDetailVideoDelegate;

@interface SGMergerDetailVideoCell : SGMergerMessageBaseCell
{
    SGMergerMessageDetailModel *_model;
    SGDialogs *_dialog;
    id <SGMergerDetailVideoDelegate> _cellDelegate;
    UILabel *_titleLab;
    UILabel *_introLab;
    UIImageView *_videoView;
    UIView *_loadingvView;
    UIActivityIndicatorView *_loading;
}

@property(retain, nonatomic) UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *loadingvView; // @synthesize loadingvView=_loadingvView;
@property(retain, nonatomic) UIImageView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UILabel *introLab; // @synthesize introLab=_introLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak id <SGMergerDetailVideoDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) SGDialogs *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SGMergerMessageDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tapWhiteBkgView:(id)arg1;
- (void)setChildView;

@end

