//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SGBankCardVO : NSObject <NSCoding>
{
    int _cardStatus;
    long long _rowId;
    NSString *_cardNo;
    long long _userId;
    NSString *_bankName;
    NSString *_cardType;
    NSString *_province;
    NSString *_city;
    NSString *_branch;
    NSString *_realName;
    long long _createTime;
    NSString *_bankIconUrl;
    NSString *_bankIconUrl3x;
    NSString *_bankBackground2x;
    NSString *_bankBackground3x;
    NSString *_backgroundColor;
    NSString *_bankShortCode;
    NSString *_certNo;
    NSString *_mobile;
}

@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *certNo; // @synthesize certNo=_certNo;
@property(copy, nonatomic) NSString *bankShortCode; // @synthesize bankShortCode=_bankShortCode;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *bankBackground3x; // @synthesize bankBackground3x=_bankBackground3x;
@property(copy, nonatomic) NSString *bankBackground2x; // @synthesize bankBackground2x=_bankBackground2x;
@property(copy, nonatomic) NSString *bankIconUrl3x; // @synthesize bankIconUrl3x=_bankIconUrl3x;
@property(copy, nonatomic) NSString *bankIconUrl; // @synthesize bankIconUrl=_bankIconUrl;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

