//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface HBReq : BaseReq
{
    unsigned int _timeStamp;
    NSString *_nonceStr;
    NSString *_package;
    NSString *_sign;
}

@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
- (void).cxx_destruct;

@end

