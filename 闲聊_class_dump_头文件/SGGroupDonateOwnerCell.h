//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface SGGroupDonateOwnerCell : UITableViewCell
{
    UIImageView *_headIcon;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UIButton *_refuseButton;
    UIButton *_agreeButton;
}

@property(nonatomic) __weak UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(nonatomic) __weak UIButton *refuseButton; // @synthesize refuseButton=_refuseButton;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)loadUserDonateDetail:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

