//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGSendPrivilegeGroupPacketFromAllinpayReq : SGHTTPSReqModel
{
    int _packetNum;
    int _payType;
    long long _packetId;
    NSString *_req_trace_num;
    long long _revGroupId;
    long long _singlePacketAmount;
    NSString *_wishContent;
    NSString *_payPasswd;
    NSString *_appointedIdList;
    NSString *_cardNo;
}

@property(copy, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(nonatomic) int payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *appointedIdList; // @synthesize appointedIdList=_appointedIdList;
@property(copy, nonatomic) NSString *payPasswd; // @synthesize payPasswd=_payPasswd;
@property(copy, nonatomic) NSString *wishContent; // @synthesize wishContent=_wishContent;
@property(nonatomic) int packetNum; // @synthesize packetNum=_packetNum;
@property(nonatomic) long long singlePacketAmount; // @synthesize singlePacketAmount=_singlePacketAmount;
@property(nonatomic) long long revGroupId; // @synthesize revGroupId=_revGroupId;
@property(copy, nonatomic) NSString *req_trace_num; // @synthesize req_trace_num=_req_trace_num;
@property(nonatomic) long long packetId; // @synthesize packetId=_packetId;
- (void).cxx_destruct;
- (int)constructor;

@end

