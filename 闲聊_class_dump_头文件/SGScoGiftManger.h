//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHTTPSessionManager, NSMutableDictionary;

@interface SGScoGiftManger : NSObject
{
    AFHTTPSessionManager *_manger;
    NSMutableDictionary *_cachGifDataDict;
    NSMutableDictionary *_cachPageDictM;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *cachPageDictM; // @synthesize cachPageDictM=_cachPageDictM;
@property(retain, nonatomic) NSMutableDictionary *cachGifDataDict; // @synthesize cachGifDataDict=_cachGifDataDict;
@property(retain, nonatomic) AFHTTPSessionManager *manger; // @synthesize manger=_manger;
- (void).cxx_destruct;
- (void)httpPostCallBack:(id)arg1 withParameters:(id)arg2 withSuccess:(CDUnknownBlockType)arg3 withFailure:(CDUnknownBlockType)arg4;
- (id)httpGetCallBack:(id)arg1 Parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)cleanAllGifCachl;
- (void)cleanGifMenonry;
- (void)downLoadGifImage:(id)arg1 uin:(long long)arg2 downLoadGifBlock:(CDUnknownBlockType)arg3;
- (void)setUserHaveOpenGif:(_Bool)arg1;
@property(readonly, nonatomic) _Bool haveOpenGif;
- (long long)getGifPageForItem:(id)arg1;
- (id)getGifCachDataForItem:(id)arg1;
- (void)saveGifNetDataForItem:(id)arg1 gifData:(id)arg2 requestPage:(long long)arg3;
- (id)requestGifDataOfSearch:(long long)arg1 searchTitle:(id)arg2 requestBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (id)requestGifDataOfItem:(long long)arg1 itemTitle:(id)arg2 requestBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (id)getBackItemID:(id)arg1;
- (void)requestGiftItemsData;
- (void)requestGiftCategory;

@end

