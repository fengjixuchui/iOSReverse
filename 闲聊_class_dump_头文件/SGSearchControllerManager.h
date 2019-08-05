//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISearchControllerDelegate-Protocol.h"

@class NSHashTable, NSString;

@interface SGSearchControllerManager : NSObject <UISearchControllerDelegate>
{
    NSHashTable *_searchControllers;
    NSHashTable *_searchControllerDelegates;
}

+ (id)sharedSGSearchControllerManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSHashTable *searchControllerDelegates; // @synthesize searchControllerDelegates=_searchControllerDelegates;
@property(retain, nonatomic) NSHashTable *searchControllers; // @synthesize searchControllers=_searchControllers;
- (void).cxx_destruct;
- (_Bool)isWildPointerDelegate:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)resignSearchBarFirstResponder;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

