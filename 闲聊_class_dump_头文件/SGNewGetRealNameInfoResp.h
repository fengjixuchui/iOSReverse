//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface SGNewGetRealNameInfoResp : SGHTTPSResponseModel <NSCoding>
{
    _Bool _realNameStatus;
    _Bool _tlOpenStatus;
    _Bool _lqbOpenStatus;
    _Bool _rpVerifyFlag;
    NSString *_realName;
    NSString *_certNo;
    NSString *_tlUrl;
    NSString *_oldRealName;
    NSString *_oldCerNo;
}

+ (int)constructor;
@property(nonatomic) _Bool rpVerifyFlag; // @synthesize rpVerifyFlag=_rpVerifyFlag;
@property(copy, nonatomic) NSString *oldCerNo; // @synthesize oldCerNo=_oldCerNo;
@property(copy, nonatomic) NSString *oldRealName; // @synthesize oldRealName=_oldRealName;
@property(nonatomic) _Bool lqbOpenStatus; // @synthesize lqbOpenStatus=_lqbOpenStatus;
@property(nonatomic) _Bool tlOpenStatus; // @synthesize tlOpenStatus=_tlOpenStatus;
@property(nonatomic) _Bool realNameStatus; // @synthesize realNameStatus=_realNameStatus;
@property(copy, nonatomic) NSString *tlUrl; // @synthesize tlUrl=_tlUrl;
@property(copy, nonatomic) NSString *certNo; // @synthesize certNo=_certNo;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

