//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class SGShareSpecialGameModel;

@interface SGShareSpecialGameCellModel : SGDialogDetailCellModel
{
    SGShareSpecialGameModel *_gameModel;
    struct CGRect _logoFrame;
    struct CGRect _nameFrame;
    struct CGRect _titleFrame;
    struct CGRect _iconFrame;
}

@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect nameFrame; // @synthesize nameFrame=_nameFrame;
@property(nonatomic) struct CGRect logoFrame; // @synthesize logoFrame=_logoFrame;
@property(retain, nonatomic) SGShareSpecialGameModel *gameModel; // @synthesize gameModel=_gameModel;
- (void).cxx_destruct;
- (Class)getCellClass;
- (struct CGSize)getSizeBy:(id)arg1 strFont:(double)arg2 maxSize:(struct CGSize)arg3;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

