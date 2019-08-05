//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSString;

@interface SGDialogMessageGroupInvitationCellModel : SGDialogDetailCellModel
{
    NSString *_title;
    NSString *_cantent;
    long long _groupUin;
    NSString *_groupAvatarKey;
    struct CGRect _titleFrame;
    struct CGRect _cantentFrame;
    struct CGRect _groupIconFrame;
}

@property(copy, nonatomic) NSString *groupAvatarKey; // @synthesize groupAvatarKey=_groupAvatarKey;
@property(nonatomic) long long groupUin; // @synthesize groupUin=_groupUin;
@property(nonatomic) struct CGRect groupIconFrame; // @synthesize groupIconFrame=_groupIconFrame;
@property(nonatomic) struct CGRect cantentFrame; // @synthesize cantentFrame=_cantentFrame;
@property(retain, nonatomic) NSString *cantent; // @synthesize cantent=_cantent;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (Class)getCellClass;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

