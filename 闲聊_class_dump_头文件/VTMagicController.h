//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "VTMagicProtocol-Protocol.h"
#import "VTMagicViewDataSource-Protocol.h"
#import "VTMagicViewDelegate-Protocol.h"

@class NSArray, NSString, VTMagicView;

@interface VTMagicController : UIViewController <VTMagicViewDelegate, VTMagicViewDataSource, VTMagicProtocol>
{
    VTMagicView *_magicView;
    unsigned long long _currentPage;
    unsigned long long _appearanceState;
    UIViewController *_currentViewController;
}

@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) unsigned long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) VTMagicView *magicView; // @synthesize magicView=_magicView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *viewControllers;
- (void)magicView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)magicView:(id)arg1 viewDidDisappear:(id)arg2 atPage:(unsigned long long)arg3;
- (void)magicView:(id)arg1 viewDidAppear:(id)arg2 atPage:(unsigned long long)arg3;
- (id)magicView:(id)arg1 viewControllerAtPage:(unsigned long long)arg2;
- (id)magicView:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (id)menuTitlesForMagicView:(id)arg1;
- (void)switchToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)viewControllerAtPage:(unsigned long long)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

