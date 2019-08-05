//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol AlipayRedpacketHeadViewDelegate;

@interface SGAlipayRedpacketHeadView : UIView
{
    id <AlipayRedpacketHeadViewDelegate> _delegate;
    UIImageView *_headImageView;
    UILabel *_moneyLab;
    UILabel *_numLab;
    UILabel *_nickLab;
    UILabel *_bottomLab;
    UIView *_centerV;
    UIImageView *_iconView;
    UIView *_line;
    UIButton *_receiveButton;
    UIButton *_sendButton;
    UIView *_bottomRedView;
}

@property(retain, nonatomic) UIView *bottomRedView; // @synthesize bottomRedView=_bottomRedView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *receiveButton; // @synthesize receiveButton=_receiveButton;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *centerV; // @synthesize centerV=_centerV;
@property(nonatomic) __weak UILabel *bottomLab; // @synthesize bottomLab=_bottomLab;
@property(retain, nonatomic) UILabel *nickLab; // @synthesize nickLab=_nickLab;
@property(retain, nonatomic) UILabel *numLab; // @synthesize numLab=_numLab;
@property(retain, nonatomic) UILabel *moneyLab; // @synthesize moneyLab=_moneyLab;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <AlipayRedpacketHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickSendRedPacket:(id)arg1;
- (void)clickReceiveRedPacket:(id)arg1;
- (void)reloadRedPacketNumAndMoney:(int)arg1 AlipayRedpacketMoney:(long long)arg2 AlipayRedpacketIsReceive:(_Bool)arg3;
- (void)setSendRedpacketInfo:(id)arg1;
- (void)setReceiveRedpacketInfo:(id)arg1;
- (void)creatChildView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

