//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSNumber, NSString;

@interface SGErrorReportRequest : SGHTTPSReqModel
{
    NSNumber *_userId;
    NSString *_code;
    NSString *_message;
    NSString *_buildVersion;
    NSNumber *_logType;
    NSString *_sign;
    NSString *_exceptionInfo;
}

@property(copy, nonatomic) NSString *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSNumber *logType; // @synthesize logType=_logType;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

