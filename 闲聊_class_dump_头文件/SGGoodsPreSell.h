//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGGoodsPreSell : NSObject
{
    int _deliveryType;
    long long _value;
    NSString *_deliveryTimeText;
}

@property(copy, nonatomic) NSString *deliveryTimeText; // @synthesize deliveryTimeText=_deliveryTimeText;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) int deliveryType; // @synthesize deliveryType=_deliveryType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPreDeleveTime;

@end

