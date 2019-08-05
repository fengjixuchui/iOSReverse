//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface MGFaceIDLiveDetectCustomConfigItem : NSObject
{
    UIColor *_livenessHomeBackgroundColor;
    UIColor *_livenessHomeRingColor;
    UIColor *_livenessHomeProcessBarColor;
    UIColor *_livenessHomeValidationFailProcessBarColor;
    UIColor *_livenessHomePromptColor;
    UIColor *_livenessHomePromptFlashColor;
    double _livenessHomePromptSize;
    UIColor *_livenessExitTitlePromptColor;
    double _livenessExitTitlePromptSize;
    UIColor *_livenessExitLeftPromptColor;
    double _livenessExitLeftPromptSize;
    UIColor *_livenessExitRightPromptColor;
    double _livenessExitRightPromptSize;
}

@property(nonatomic) double livenessExitRightPromptSize; // @synthesize livenessExitRightPromptSize=_livenessExitRightPromptSize;
@property(retain, nonatomic) UIColor *livenessExitRightPromptColor; // @synthesize livenessExitRightPromptColor=_livenessExitRightPromptColor;
@property(nonatomic) double livenessExitLeftPromptSize; // @synthesize livenessExitLeftPromptSize=_livenessExitLeftPromptSize;
@property(retain, nonatomic) UIColor *livenessExitLeftPromptColor; // @synthesize livenessExitLeftPromptColor=_livenessExitLeftPromptColor;
@property(nonatomic) double livenessExitTitlePromptSize; // @synthesize livenessExitTitlePromptSize=_livenessExitTitlePromptSize;
@property(retain, nonatomic) UIColor *livenessExitTitlePromptColor; // @synthesize livenessExitTitlePromptColor=_livenessExitTitlePromptColor;
@property(nonatomic) double livenessHomePromptSize; // @synthesize livenessHomePromptSize=_livenessHomePromptSize;
@property(retain, nonatomic) UIColor *livenessHomePromptFlashColor; // @synthesize livenessHomePromptFlashColor=_livenessHomePromptFlashColor;
@property(retain, nonatomic) UIColor *livenessHomePromptColor; // @synthesize livenessHomePromptColor=_livenessHomePromptColor;
@property(retain, nonatomic) UIColor *livenessHomeValidationFailProcessBarColor; // @synthesize livenessHomeValidationFailProcessBarColor=_livenessHomeValidationFailProcessBarColor;
@property(retain, nonatomic) UIColor *livenessHomeProcessBarColor; // @synthesize livenessHomeProcessBarColor=_livenessHomeProcessBarColor;
@property(retain, nonatomic) UIColor *livenessHomeRingColor; // @synthesize livenessHomeRingColor=_livenessHomeRingColor;
@property(retain, nonatomic) UIColor *livenessHomeBackgroundColor; // @synthesize livenessHomeBackgroundColor=_livenessHomeBackgroundColor;
- (void).cxx_destruct;
- (id)init;

@end

