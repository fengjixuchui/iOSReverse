//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSDictionary, NSMutableAttributedString;

@interface SGDialogMessageDonatedCellModel : SGDialogDetailCellModel
{
    NSMutableAttributedString *_blessAttributeStr;
    NSMutableAttributedString *_contentAttributeStr;
    NSMutableAttributedString *_descriptionAttributeStr;
    NSDictionary *_donateDict;
    struct CGRect _maskImageViewFrame;
    struct CGRect _redPacketImageFrame;
    struct CGRect _blessLabelFrame;
    struct CGRect _contentLabelFrame;
    struct CGRect _whiteBackViewFrame;
    struct CGRect _descriptionLabelFrame;
    struct CGRect _alipayIconFrame;
}

@property(nonatomic) struct CGRect alipayIconFrame; // @synthesize alipayIconFrame=_alipayIconFrame;
@property(retain, nonatomic) NSDictionary *donateDict; // @synthesize donateDict=_donateDict;
@property(nonatomic) struct CGRect descriptionLabelFrame; // @synthesize descriptionLabelFrame=_descriptionLabelFrame;
@property(nonatomic) struct CGRect whiteBackViewFrame; // @synthesize whiteBackViewFrame=_whiteBackViewFrame;
@property(nonatomic) struct CGRect contentLabelFrame; // @synthesize contentLabelFrame=_contentLabelFrame;
@property(nonatomic) struct CGRect blessLabelFrame; // @synthesize blessLabelFrame=_blessLabelFrame;
@property(nonatomic) struct CGRect redPacketImageFrame; // @synthesize redPacketImageFrame=_redPacketImageFrame;
@property(nonatomic) struct CGRect maskImageViewFrame; // @synthesize maskImageViewFrame=_maskImageViewFrame;
@property(retain, nonatomic) NSMutableAttributedString *descriptionAttributeStr; // @synthesize descriptionAttributeStr=_descriptionAttributeStr;
@property(retain, nonatomic) NSMutableAttributedString *contentAttributeStr; // @synthesize contentAttributeStr=_contentAttributeStr;
@property(retain, nonatomic) NSMutableAttributedString *blessAttributeStr; // @synthesize blessAttributeStr=_blessAttributeStr;
- (void).cxx_destruct;
- (Class)getCellClass;
- (id)getMessageAttributedStringWithText:(id)arg1 font:(id)arg2;
- (void)refershModelDonateCellDict;
- (void)calculateSubView;
- (void)messageTextWithDict;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

