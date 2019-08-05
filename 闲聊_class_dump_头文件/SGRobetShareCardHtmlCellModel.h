//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableAttributedString, NSString;

@interface SGRobetShareCardHtmlCellModel : SGDialogDetailCellModel
{
    NSAttributedString *_titleAttributeStr;
    NSMutableAttributedString *_appNameAttributeStr;
    NSDictionary *_gameDict;
    NSArray *_contentArray;
    NSString *_appIcon;
    struct CGRect _titleFrame;
    struct CGRect _lineLabelFrame;
    struct CGRect _appNameFrame;
    struct CGRect _contenctFrame;
    struct CGRect _appIconFrame;
}

@property(copy, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(nonatomic) struct CGRect appIconFrame; // @synthesize appIconFrame=_appIconFrame;
@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSDictionary *gameDict; // @synthesize gameDict=_gameDict;
@property(nonatomic) struct CGRect contenctFrame; // @synthesize contenctFrame=_contenctFrame;
@property(nonatomic) struct CGRect appNameFrame; // @synthesize appNameFrame=_appNameFrame;
@property(nonatomic) struct CGRect lineLabelFrame; // @synthesize lineLabelFrame=_lineLabelFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) NSMutableAttributedString *appNameAttributeStr; // @synthesize appNameAttributeStr=_appNameAttributeStr;
@property(copy, nonatomic) NSAttributedString *titleAttributeStr; // @synthesize titleAttributeStr=_titleAttributeStr;
- (void).cxx_destruct;
- (Class)getCellClass;
- (id)getMessageAttributedStringWithText:(id)arg1 font:(id)arg2;
- (id)getMessageAttributedStringWithText:(id)arg1 contentColor:(id)arg2 font:(id)arg3;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

