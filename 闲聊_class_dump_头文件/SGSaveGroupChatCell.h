//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SGSaveGroupChatModel, UIImageView, UILabel;

@interface SGSaveGroupChatCell : UITableViewCell
{
    SGSaveGroupChatModel *_model;
    UIImageView *_xmallLevelImageView;
    UIImageView *_headImage;
    UIImageView *_vipImage;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *vipImage; // @synthesize vipImage=_vipImage;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIImageView *xmallLevelImageView; // @synthesize xmallLevelImageView=_xmallLevelImageView;
@property(retain, nonatomic) SGSaveGroupChatModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

