//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGOrderRefundReasonVO : NSObject
{
    _Bool _isSelect;
    int _expressStatus;
    long long _reasonId;
    NSString *_reasonDesc;
    NSString *_expressStatusDesc;
    long long _typeId;
    NSString *_typeDesc;
    long long _amout;
}

@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) long long amout; // @synthesize amout=_amout;
@property(copy, nonatomic) NSString *typeDesc; // @synthesize typeDesc=_typeDesc;
@property(nonatomic) long long typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *expressStatusDesc; // @synthesize expressStatusDesc=_expressStatusDesc;
@property(nonatomic) int expressStatus; // @synthesize expressStatus=_expressStatus;
@property(copy, nonatomic) NSString *reasonDesc; // @synthesize reasonDesc=_reasonDesc;
@property(nonatomic) long long reasonId; // @synthesize reasonId=_reasonId;
- (void).cxx_destruct;

@end

