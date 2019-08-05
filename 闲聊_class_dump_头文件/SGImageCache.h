//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface SGImageCache : NSObject
{
    NSMutableDictionary *_imageCaches;
    NSOperationQueue *_downloadImageQueue;
    NSObject<OS_dispatch_queue> *_imageCacheQueue;
}

+ (id)share;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue; // @synthesize imageCacheQueue=_imageCacheQueue;
@property(retain, nonatomic) NSOperationQueue *downloadImageQueue; // @synthesize downloadImageQueue=_downloadImageQueue;
@property(retain, nonatomic) NSMutableDictionary *imageCaches; // @synthesize imageCaches=_imageCaches;
- (void).cxx_destruct;
- (void)cleanMemoryCach;
- (long long)getUinByAvatarUrl:(id)arg1;
- (void)writeDataToFileWithImageURL:(id)arg1 WithUin:(long long)arg2 withData:(id)arg3 withFileType:(unsigned long long)arg4;
- (void)writeDataToCacheWithImageURL:(id)arg1 withImage:(id)arg2;
- (id)loadDataFromFileWithImageURL:(id)arg1 withUin:(long long)arg2 withFileType:(unsigned long long)arg3 withIsCircle:(_Bool)arg4 size:(struct CGSize)arg5;
- (id)loadDataFromCacheWithImageURL:(id)arg1;
- (id)loadGroupMemberImage:(id)arg1;
- (void)downloadGroupIconWithURLArr:(id)arg1 withSize:(struct CGRect)arg2 withGroupUin:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)downloadGroupIconWithGroupMember:(id)arg1 withSize:(struct CGRect)arg2 withGroupUin:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)getCustomCachHeadImage:(CDUnknownBlockType)arg1;
- (void)sgDownloadImageWithURL:(id)arg1 withUin:(long long)arg2 withIsCircle:(_Bool)arg3 size:(struct CGSize)arg4 withType:(unsigned long long)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (_Bool)hasCahceImageByUrl:(id)arg1;
- (void)downloadImageThread:(CDUnknownBlockType)arg1;

@end

