//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SGGoodsChooseNumView, SGShopCartCustomModel, UIButton, UIImageView, UILabel;
@protocol ShopCartListCellDelegate;

@interface SGShopCartListCell : UITableViewCell
{
    _Bool _isEdit;
    SGShopCartCustomModel *_model;
    id <ShopCartListCellDelegate> _cellDelegate;
    UILabel *_goodsNameLab;
    UIImageView *_bkgImageView;
    UIButton *_selectButton;
    UIImageView *_goodsIconView;
    UILabel *_goodsSkuLab;
    UILabel *_goodsPriceLab;
    UILabel *_stockNumLab;
    UILabel *_preSellTimeLab;
    SGGoodsChooseNumView *_numberView;
}

@property(retain, nonatomic) SGGoodsChooseNumView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) UILabel *preSellTimeLab; // @synthesize preSellTimeLab=_preSellTimeLab;
@property(retain, nonatomic) UILabel *stockNumLab; // @synthesize stockNumLab=_stockNumLab;
@property(retain, nonatomic) UILabel *goodsPriceLab; // @synthesize goodsPriceLab=_goodsPriceLab;
@property(retain, nonatomic) UILabel *goodsSkuLab; // @synthesize goodsSkuLab=_goodsSkuLab;
@property(retain, nonatomic) UIImageView *goodsIconView; // @synthesize goodsIconView=_goodsIconView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIImageView *bkgImageView; // @synthesize bkgImageView=_bkgImageView;
@property(retain, nonatomic) UILabel *goodsNameLab; // @synthesize goodsNameLab=_goodsNameLab;
@property(nonatomic) __weak id <ShopCartListCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) SGShopCartCustomModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)selectButtonClick:(id)arg1;
- (void)reloadShowStockNum:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

