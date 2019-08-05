//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSString, SGOrderDeliverGoodsModel;

@interface SGDeleiverGoodCellModel : SGDialogDetailCellModel
{
    SGOrderDeliverGoodsModel *_model;
    NSString *_noticeTitle;
    NSString *_noticeTime;
    NSString *_groupNameKey;
    NSString *_groupNameValue;
    NSString *_orderAmoutKey;
    NSString *_orderAmoutValue;
    NSString *_goodsNameKey;
    NSString *_goodsNameValue;
    NSString *_deleiverNumKey;
    NSString *_deleiverNumValue;
    NSString *_deleiverNameKey;
    NSString *_deleiverNameValue;
    struct CGRect _noticeTitleFrame;
    struct CGRect _noticeTimeFrame;
    struct CGRect _topLineFrame;
    struct CGRect _bottomLineFrame;
    struct CGRect _groupNameKeyFrame;
    struct CGRect _groupNameValueFrame;
    struct CGRect _orderAmoutKeyFrame;
    struct CGRect _orderAmoutValueFrame;
    struct CGRect _goodsNameKeyFrame;
    struct CGRect _goodsNameValueFrame;
    struct CGRect _deleiverNumKeyFrame;
    struct CGRect _deleiverNumValueFrame;
    struct CGRect _deleiverNameKeyFrame;
    struct CGRect _deleiverNameValueFrame;
    struct CGRect _bottomFrame;
    struct CGRect _arrowFrame;
}

@property(nonatomic) struct CGRect arrowFrame; // @synthesize arrowFrame=_arrowFrame;
@property(nonatomic) struct CGRect bottomFrame; // @synthesize bottomFrame=_bottomFrame;
@property(nonatomic) struct CGRect deleiverNameValueFrame; // @synthesize deleiverNameValueFrame=_deleiverNameValueFrame;
@property(nonatomic) struct CGRect deleiverNameKeyFrame; // @synthesize deleiverNameKeyFrame=_deleiverNameKeyFrame;
@property(nonatomic) struct CGRect deleiverNumValueFrame; // @synthesize deleiverNumValueFrame=_deleiverNumValueFrame;
@property(nonatomic) struct CGRect deleiverNumKeyFrame; // @synthesize deleiverNumKeyFrame=_deleiverNumKeyFrame;
@property(nonatomic) struct CGRect goodsNameValueFrame; // @synthesize goodsNameValueFrame=_goodsNameValueFrame;
@property(nonatomic) struct CGRect goodsNameKeyFrame; // @synthesize goodsNameKeyFrame=_goodsNameKeyFrame;
@property(nonatomic) struct CGRect orderAmoutValueFrame; // @synthesize orderAmoutValueFrame=_orderAmoutValueFrame;
@property(nonatomic) struct CGRect orderAmoutKeyFrame; // @synthesize orderAmoutKeyFrame=_orderAmoutKeyFrame;
@property(nonatomic) struct CGRect groupNameValueFrame; // @synthesize groupNameValueFrame=_groupNameValueFrame;
@property(nonatomic) struct CGRect groupNameKeyFrame; // @synthesize groupNameKeyFrame=_groupNameKeyFrame;
@property(nonatomic) struct CGRect bottomLineFrame; // @synthesize bottomLineFrame=_bottomLineFrame;
@property(nonatomic) struct CGRect topLineFrame; // @synthesize topLineFrame=_topLineFrame;
@property(nonatomic) struct CGRect noticeTimeFrame; // @synthesize noticeTimeFrame=_noticeTimeFrame;
@property(nonatomic) struct CGRect noticeTitleFrame; // @synthesize noticeTitleFrame=_noticeTitleFrame;
@property(copy, nonatomic) NSString *deleiverNameValue; // @synthesize deleiverNameValue=_deleiverNameValue;
@property(copy, nonatomic) NSString *deleiverNameKey; // @synthesize deleiverNameKey=_deleiverNameKey;
@property(copy, nonatomic) NSString *deleiverNumValue; // @synthesize deleiverNumValue=_deleiverNumValue;
@property(copy, nonatomic) NSString *deleiverNumKey; // @synthesize deleiverNumKey=_deleiverNumKey;
@property(copy, nonatomic) NSString *goodsNameValue; // @synthesize goodsNameValue=_goodsNameValue;
@property(copy, nonatomic) NSString *goodsNameKey; // @synthesize goodsNameKey=_goodsNameKey;
@property(copy, nonatomic) NSString *orderAmoutValue; // @synthesize orderAmoutValue=_orderAmoutValue;
@property(copy, nonatomic) NSString *orderAmoutKey; // @synthesize orderAmoutKey=_orderAmoutKey;
@property(copy, nonatomic) NSString *groupNameValue; // @synthesize groupNameValue=_groupNameValue;
@property(copy, nonatomic) NSString *groupNameKey; // @synthesize groupNameKey=_groupNameKey;
@property(copy, nonatomic) NSString *noticeTime; // @synthesize noticeTime=_noticeTime;
@property(copy, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(retain, nonatomic) SGOrderDeliverGoodsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (Class)getCellClass;
- (struct CGSize)getSizeBy:(id)arg1 strFont:(double)arg2 maxSize:(struct CGSize)arg3;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

