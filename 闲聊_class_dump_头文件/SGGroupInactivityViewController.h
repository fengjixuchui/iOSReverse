//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SGGameObject, SGGroupInfo, SGMessage, SugramShareBaseObject, UIButton, UILabel, UIScrollView, UITableView, UITextField, UIView;

@interface SGGroupInactivityViewController : SGViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIScrollViewDelegate>
{
    _Bool searchFlag;
    double _keyBoardHeight;
    _Bool _is200;
    _Bool _needOffset;
    _Bool _textFieldChange;
    _Bool _isAllSelect;
    long long _groupUin;
    NSArray *_adminIds;
    SGGameObject *_game;
    SGMessage *_forwardMessage;
    NSArray *_forwardMessageArr;
    SGGroupInfo *_groupInfo;
    unsigned long long _activityType;
    NSString *_titleString;
    SGMessage *_openUrlMessage;
    SGMessage *_groupInvitationMessage;
    SGMessage *_urlMessage;
    SGMessage *_sociateMessage;
    SugramShareBaseObject *_baseObject;
    CDUnknownBlockType _ownerTransBlock;
    unsigned long long _opreationType;
    UITextField *_searchTextFiled;
    NSArray *_keys;
    NSDictionary *_friendsDic;
    NSArray *_searchArr;
    NSMutableArray *_chooseArr;
    UITableView *_contactsTableView;
    UILabel *_groupmemberOverTips;
    UILabel *_titleLab;
    UIButton *_nextBtn;
    NSArray *_groupMember;
    NSArray *_friendsArray;
    UIView *_headView;
    UIScrollView *_headScrollView;
    UIView *_footView;
    UILabel *_tipsLabel;
    NSMutableArray *_ChoiceHeaderSubViews;
    NSArray *_adminArr;
    UILabel *_headerLabel;
    UIView *_bottomView;
    UIButton *_allSelectButton;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *allSelectButton; // @synthesize allSelectButton=_allSelectButton;
@property(nonatomic) _Bool isAllSelect; // @synthesize isAllSelect=_isAllSelect;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSArray *adminArr; // @synthesize adminArr=_adminArr;
@property(retain, nonatomic) NSMutableArray *ChoiceHeaderSubViews; // @synthesize ChoiceHeaderSubViews=_ChoiceHeaderSubViews;
@property(nonatomic) _Bool textFieldChange; // @synthesize textFieldChange=_textFieldChange;
@property(nonatomic) _Bool needOffset; // @synthesize needOffset=_needOffset;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIScrollView *headScrollView; // @synthesize headScrollView=_headScrollView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSArray *friendsArray; // @synthesize friendsArray=_friendsArray;
@property(nonatomic) _Bool is200; // @synthesize is200=_is200;
@property(retain, nonatomic) NSArray *groupMember; // @synthesize groupMember=_groupMember;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UILabel *groupmemberOverTips; // @synthesize groupmemberOverTips=_groupmemberOverTips;
@property(retain, nonatomic) UITableView *contactsTableView; // @synthesize contactsTableView=_contactsTableView;
@property(retain, nonatomic) NSMutableArray *chooseArr; // @synthesize chooseArr=_chooseArr;
@property(retain, nonatomic) NSArray *searchArr; // @synthesize searchArr=_searchArr;
@property(retain, nonatomic) NSDictionary *friendsDic; // @synthesize friendsDic=_friendsDic;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) UITextField *searchTextFiled; // @synthesize searchTextFiled=_searchTextFiled;
@property(nonatomic) unsigned long long opreationType; // @synthesize opreationType=_opreationType;
@property(copy, nonatomic) CDUnknownBlockType ownerTransBlock; // @synthesize ownerTransBlock=_ownerTransBlock;
@property(retain, nonatomic) SugramShareBaseObject *baseObject; // @synthesize baseObject=_baseObject;
@property(retain, nonatomic) SGMessage *sociateMessage; // @synthesize sociateMessage=_sociateMessage;
@property(retain, nonatomic) SGMessage *urlMessage; // @synthesize urlMessage=_urlMessage;
@property(retain, nonatomic) SGMessage *groupInvitationMessage; // @synthesize groupInvitationMessage=_groupInvitationMessage;
@property(retain, nonatomic) SGMessage *openUrlMessage; // @synthesize openUrlMessage=_openUrlMessage;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) SGGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) NSArray *forwardMessageArr; // @synthesize forwardMessageArr=_forwardMessageArr;
@property(retain, nonatomic) SGMessage *forwardMessage; // @synthesize forwardMessage=_forwardMessage;
@property(retain, nonatomic) SGGameObject *game; // @synthesize game=_game;
@property(retain, nonatomic) NSArray *adminIds; // @synthesize adminIds=_adminIds;
@property(nonatomic) long long groupUin; // @synthesize groupUin=_groupUin;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)backNavgation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)breakStringInfoPart:(id)arg1;
- (void)filterFriends:(id)arg1 admindsArr:(id)arg2;
- (void)loadData;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)pushToConversationController:(id)arg1 fromRoot:(_Bool)arg2;
- (void)registerNotification;
- (void)loadHeadView;
- (void)viewDidLoad;
- (void)selectButton;
- (void)setNavBar;
- (id)filterMemberArray:(id)arg1;
- (void)refershCountWithArray:(id)arg1;
- (void)showMaxGroupMemberTips:(long long)arg1;
- (void)deleteClick;
- (void)allSelect;
- (id)initWithChatType:(unsigned long long)arg1 withGroupMember:(id)arg2 withGroupUin:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

