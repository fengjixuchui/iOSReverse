//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JYImageCache, JYWebImageDownloader, NSMutableArray;
@protocol JYWebImageManagerDelegate;

@interface JYWebImageManager : NSObject
{
    id <JYWebImageManagerDelegate> _delegate;
    JYImageCache *_imageCache;
    JYWebImageDownloader *_imageDownloader;
    CDUnknownBlockType _cacheKeyFilter;
    NSMutableArray *_failedURLs;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(retain, nonatomic) NSMutableArray *failedURLs; // @synthesize failedURLs=_failedURLs;
@property(copy, nonatomic) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(retain, nonatomic) JYWebImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) JYImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <JYWebImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isRunning;
- (void)cancelAll;
- (void)saveImageToCache:(id)arg1 forURL:(id)arg2;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)diskImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cachedImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)diskImageExistsForURL:(id)arg1;
- (_Bool)cachedImageExistsForURL:(id)arg1;
- (id)cacheKeyForURL:(id)arg1;
- (id)createCache;
- (id)init;

@end

