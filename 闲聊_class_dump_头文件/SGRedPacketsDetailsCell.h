//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol SGRedPacketsCellDelegate;

@interface SGRedPacketsDetailsCell : UITableViewCell
{
    _Bool _showChooseMore;
    id <SGRedPacketsCellDelegate> _cellDelegate;
    UILabel *_redPacketTypeLab;
    UILabel *_redPacketMoneyLab;
    UILabel *_redPacktetTimeLab;
    UILabel *_redPacketNumLab;
    UIImageView *_chooseAccountView;
    NSLayoutConstraint *_chooseWidth;
    NSLayoutConstraint *_chooseLeading;
    NSLayoutConstraint *_typeLabLeading;
    NSLayoutConstraint *_timeLabLeading;
    UIButton *_bkgButton;
    id _packetModel;
}

@property(retain, nonatomic) id packetModel; // @synthesize packetModel=_packetModel;
@property(nonatomic) __weak UIButton *bkgButton; // @synthesize bkgButton=_bkgButton;
@property(nonatomic) __weak NSLayoutConstraint *timeLabLeading; // @synthesize timeLabLeading=_timeLabLeading;
@property(nonatomic) __weak NSLayoutConstraint *typeLabLeading; // @synthesize typeLabLeading=_typeLabLeading;
@property(nonatomic) __weak NSLayoutConstraint *chooseLeading; // @synthesize chooseLeading=_chooseLeading;
@property(nonatomic) __weak NSLayoutConstraint *chooseWidth; // @synthesize chooseWidth=_chooseWidth;
@property(nonatomic) __weak UIImageView *chooseAccountView; // @synthesize chooseAccountView=_chooseAccountView;
@property(nonatomic) __weak UILabel *redPacketNumLab; // @synthesize redPacketNumLab=_redPacketNumLab;
@property(nonatomic) __weak UILabel *redPacktetTimeLab; // @synthesize redPacktetTimeLab=_redPacktetTimeLab;
@property(nonatomic) __weak UILabel *redPacketMoneyLab; // @synthesize redPacketMoneyLab=_redPacketMoneyLab;
@property(nonatomic) __weak UILabel *redPacketTypeLab; // @synthesize redPacketTypeLab=_redPacketTypeLab;
@property(nonatomic) _Bool showChooseMore; // @synthesize showChooseMore=_showChooseMore;
@property(nonatomic) __weak id <SGRedPacketsCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)setRedPacketsType:(id)arg1 withRedPacketsMoney:(id)arg2 withRedPacketsTime:(id)arg3 withRedPacketsNum:(id)arg4;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)clickPush;
- (void)tapCell:(id)arg1;
- (void)awakeFromNib;

@end

