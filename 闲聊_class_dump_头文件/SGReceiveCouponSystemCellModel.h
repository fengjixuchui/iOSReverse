//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSString, SGCouponNoticeModel;

@interface SGReceiveCouponSystemCellModel : SGDialogDetailCellModel
{
    CDUnknownBlockType _adventemntBlock;
    SGCouponNoticeModel *_noticeModel;
    NSString *_couponsTime;
    struct CGRect _noticeTitleFrame;
    struct CGRect _noticeTimeFrame;
    struct CGRect _noticeContentFrame;
    struct CGRect _lineFrame;
    struct CGRect _arrowFrame;
    struct CGRect _bottomtextFrame;
    struct CGRect _advenceLinkFrame;
}

@property(nonatomic) struct CGRect advenceLinkFrame; // @synthesize advenceLinkFrame=_advenceLinkFrame;
@property(nonatomic) struct CGRect bottomtextFrame; // @synthesize bottomtextFrame=_bottomtextFrame;
@property(nonatomic) struct CGRect arrowFrame; // @synthesize arrowFrame=_arrowFrame;
@property(nonatomic) struct CGRect lineFrame; // @synthesize lineFrame=_lineFrame;
@property(nonatomic) struct CGRect noticeContentFrame; // @synthesize noticeContentFrame=_noticeContentFrame;
@property(nonatomic) struct CGRect noticeTimeFrame; // @synthesize noticeTimeFrame=_noticeTimeFrame;
@property(nonatomic) struct CGRect noticeTitleFrame; // @synthesize noticeTitleFrame=_noticeTitleFrame;
@property(copy, nonatomic) NSString *couponsTime; // @synthesize couponsTime=_couponsTime;
@property(retain, nonatomic) SGCouponNoticeModel *noticeModel; // @synthesize noticeModel=_noticeModel;
@property(copy, nonatomic) CDUnknownBlockType adventemntBlock; // @synthesize adventemntBlock=_adventemntBlock;
- (void).cxx_destruct;
- (Class)getCellClass;
- (struct CGSize)getSizeBy:(id)arg1 strFont:(double)arg2 maxSize:(struct CGSize)arg3;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

