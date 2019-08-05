//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, UIScrollView;
@protocol TypeSheetSelect;

@interface PacketTypeSheetView : UIView
{
    UILabel *_typeSheetTitleLabel;
    NSArray *_typeData;
    id <TypeSheetSelect> _delegate;
    UIView *_backGroundView;
    UIScrollView *_sheetScroll;
}

@property(retain, nonatomic) UIScrollView *sheetScroll; // @synthesize sheetScroll=_sheetScroll;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) id <TypeSheetSelect> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *typeData; // @synthesize typeData=_typeData;
@property(retain, nonatomic) UILabel *typeSheetTitleLabel; // @synthesize typeSheetTitleLabel=_typeSheetTitleLabel;
- (void).cxx_destruct;
- (void)doBuildingPacketTypeSheetView;
- (void)tappedBackGroundView;
- (void)typeViewDismiss;
- (void)doChooseAction:(id)arg1;
- (void)tappedCancel;
- (void)instanceWalletSheetView;
- (id)initWithShowViewDataCount:(long long)arg1;

@end

