//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSData, NSDictionary, NSString, SGMessage, UIActivityIndicatorView, UIImage, UIImageView, UITapGestureRecognizer, UIView;

@interface _GLImageZoomer : UIScrollView <UIScrollViewDelegate>
{
    struct CGRect _imageRect;
    NSDictionary *_imageURL;
    SGMessage *_message;
    long long _newImageIndex;
    UIImageView *_zoomImageView;
    UITapGestureRecognizer *_tapToBigGesture;
    NSData *_imageData;
    UIImage *_image;
    UIView *_loadView;
    UIActivityIndicatorView *_indicatorView;
    struct CGSize _initialSize;
    struct CGRect _visualRect;
}

@property(nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UITapGestureRecognizer *tapToBigGesture; // @synthesize tapToBigGesture=_tapToBigGesture;
@property(retain, nonatomic) UIImageView *zoomImageView; // @synthesize zoomImageView=_zoomImageView;
@property(nonatomic) long long newImageIndex; // @synthesize newImageIndex=_newImageIndex;
@property(nonatomic) struct CGRect visualRect; // @synthesize visualRect=_visualRect;
@property(nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
@property(nonatomic) __weak SGMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize)arg1;
- (void)__adjustContentSize;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
@property(readonly, nonatomic) struct CGRect imageRect;
- (void)showBigOrSmall:(id)arg1;
- (void)initZoomImageView;
- (void)setimageWithData:(id)arg1;
- (void)setLoadBigImageFinish;
- (void)setoOriginalimageData:(id)arg1;
- (void)loadBigImage;
- (void)rotate;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

