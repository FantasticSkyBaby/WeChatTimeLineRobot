/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "MMVoiceSearchBarDelegate.h"
#import "FriendAsistSessionExt.h"
#import "MainTableDelegate.h"
#import "VerifyPhoneDelegate.h"
#import "WeChat-Structs.h"
#import "MMTabBarBaseViewController.h"
#import "MMVoiceSearchDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMSearchBarDelegate.h"
#import "ContactsDataLogicDelegate.h"

@class UILabel, ContactsDataLogic, NSString, NSMutableArray, FTSVoiceSearchBarController, MMMainTableView;

@interface ContactsViewController : MMTabBarBaseViewController <UITableViewDelegate, UITableViewDataSource, VerifyPhoneDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate, MMSearchBarDelegate, MMVoiceSearchDelegate, MMVoiceSearchBarDelegate, FriendAsistSessionExt, MainTableDelegate> {
	MMMainTableView* m_tableView;
	UIEdgeInsets m_tableViewInsets;
	UILabel* m_countLabel;
	BOOL m_bShouldShowBindPhoneTip;
	ContactsDataLogic* m_contactsDataLogic;
	BOOL m_bShowHelloGroup;
	unsigned long m_uiHelloGroupUnreadCount;
	FTSVoiceSearchBarController* m_mmSearchBar;
	BOOL m_hasAddBlurEffectView;
	BOOL m_needResetTableViewOffset;
	BOOL m_searchDimmingViewRemoved;
	BOOL m_canSearchAfterInit;
	NSMutableArray* m_brandContactGroupList;
	BOOL _hasWechatOut;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL hasWechatOut;
@property(retain, nonatomic) NSMutableArray* m_brandContactGroupList;
-(void).cxx_destruct;
-(void)checkDBAutoRecover;
-(void)initDeepLinkConfig;
-(id)getVCWithDeepLinkName:(id)deepLinkName;
-(void)resetViewStatus;
-(void)onFriendAssistUnreadCountChanged;
-(void)updateTabBarBadge;
-(void)updateHelloGroup;
-(void)updateViewWhenSelectTab:(BOOL)tab;
-(id)getViewController;
-(void)OnSayHelloDataChange;
-(void)displayControllerSetActive:(BOOL)active animated:(BOOL)animated;
-(void)SearchBarBecomeUnActive;
-(BOOL)shouldShowTabbar;
-(void)SearchBarBecomeActive;
-(void)addBlurEffectView;
-(void)setSearchTableResultText:(id)text;
-(void)OnVoiceSearchButtonDown;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)applySearchBeginAnimation:(id)animation;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)resetTableViewOffset:(id)offset;
-(void)doSearch:(id)search Pre:(BOOL)pre;
-(void)MMVoiceSearchBarCancelButtonClicked:(id)clicked;
-(void)MMVoiceSearchBarSearchButtonClicked:(id)clicked;
-(void)MMVoiceSearchBar:(id)bar textDidChange:(id)text;
-(BOOL)MMVoiceSearchBarShouldBeginEditing:(id)mmvoiceSearchBar;
-(void)cancelSearch;
-(BOOL)onFilterContactCandidate:(id)candidate;
-(void)onContactsDataChange;
-(void)willShow;
-(void)didAppear;
-(void)willDisshow;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)bindPhoneReturn;
-(void)handleSelectdBrandGroup:(int)group;
-(void)handleSelectdBindPhone;
-(void)handleSelectedWechatOut;
-(void)handleSelectEnterpriseBrand:(unsigned)brand;
-(void)handleSelectdHelloGroup:(unsigned)group;
-(void)handleSelectdContactTag;
-(void)handleSelectdChatRoom;
-(void)handleSelectdHelloGroup;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)makeNewUserTipCell:(id)cell;
-(void)makeBindPhoneCell:(id)cell;
-(void)makeHelloGroupCell:(id)cell row:(unsigned)row;
-(void)makeCell:(id)cell tableCell:(id)cell2 section:(unsigned)section row:(unsigned)row;
-(void)makeEnterpriseBrandCell:(id)cell row:(int)row;
-(void)makeWechatOutCell:(id)cell;
-(void)makeContactTagCell:(id)cell;
-(void)makeChatRoomCell:(id)cell;
-(void)makeHelloGroupCell:(id)cell;
-(void)addRedDotInGroupCell:(id)groupCell existNewBrand:(BOOL)brand;
-(void)makeGroupCell:(id)cell head:(id)head title:(id)title;
-(void)updateEnterpriseBrandItemCell:(id)cell contact:(id)contact;
-(void)updateNewContactsItemCell:(id)cell contact:(id)contact;
-(int)numberOfCellForBrandGroup;
-(int)numberOfCellForEnterpriseBrandGroup;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(unsigned long)getSectionType:(int)type;
-(int)ConvertToNormalContactSection:(int)normalContactSection;
-(BOOL)HasBindPhoneTip;
-(BOOL)HasWechatOutGroup;
-(BOOL)HasBrandGroup;
-(BOOL)HasEnterpriseBrandGroup;
-(BOOL)HasHelloGroup;
-(void)tryHideSearchGuideView;
-(void)tryInitViewOfSearchController;
-(void)removeSearchDimmingView;
-(BOOL)isSeachActive;
-(float)getMainTableHeight;
-(void)onMainWindowFrameChanged;
-(void)hideSearchBar;
-(void)finishSearchBarImmediately;
-(BOOL)hasShowSearchBar;
-(void)initSearchBar;
-(void)initTitleArea;
-(void)initBarItem;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)reLayoutSubviews;
-(void)viewDidLoad;
-(void)initView;
-(void)viewDidPop:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)removeContactsTip;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillPush:(BOOL)view;
-(void)willAppear;
-(void)initTableView;
-(float)getMainTableBottomInset;
-(void)initCountLabel:(id)label;
-(void)updateCount;
-(void)initData;
-(void)onAddContact;
-(void)onShowAddContact:(BOOL)contact;
-(void)showContactInfoView:(id)view;
-(void)openContactInfoView:(int)view;
-(id)init;
@end

