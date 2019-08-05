//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGMergerMessageBaseCell.h"

@class SGDialogs, SGMergerMessageDetailModel, UIActivityIndicatorView, UIView;
@protocol MergerDetailPhotoDelegate;

@interface SGMergerDetailPhotoCell : SGMergerMessageBaseCell
{
    SGMergerMessageDetailModel *_model;
    SGDialogs *_dialog;
    id <MergerDetailPhotoDelegate> _cellDelegate;
    UIView *_loadingvView;
    UIActivityIndicatorView *_loading;
}

@property(retain, nonatomic) UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *loadingvView; // @synthesize loadingvView=_loadingvView;
@property(nonatomic) __weak id <MergerDetailPhotoDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) SGDialogs *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SGMergerMessageDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tapWhiteBkgView:(id *)arg1;
- (void)setImageWithData:(id)arg1 isGif:(_Bool)arg2 withError:(id)arg3 bigPic:(_Bool)arg4 msgId:(long long)arg5;
- (void)setChildView;

@end

