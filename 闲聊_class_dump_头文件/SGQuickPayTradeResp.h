//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSString;

@interface SGQuickPayTradeResp : SGHTTPSResponseModel
{
    NSString *_errorCodeFromThirdParty;
    NSString *_errorMsgFromThirdParty;
}

+ (int)constructor;
@property(copy, nonatomic) NSString *errorMsgFromThirdParty; // @synthesize errorMsgFromThirdParty=_errorMsgFromThirdParty;
@property(copy, nonatomic) NSString *errorCodeFromThirdParty; // @synthesize errorCodeFromThirdParty=_errorCodeFromThirdParty;
- (void).cxx_destruct;

@end

