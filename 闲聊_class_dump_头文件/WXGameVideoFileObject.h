//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXGameVideoFileObject : NSObject
{
    NSData *_videoFileData;
    NSString *_videoUrl;
    NSString *_thumbUrl;
}

+ (id)object;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSData *videoFileData; // @synthesize videoFileData=_videoFileData;
- (void).cxx_destruct;

@end

