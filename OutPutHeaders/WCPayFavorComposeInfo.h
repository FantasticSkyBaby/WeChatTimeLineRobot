/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface WCPayFavorComposeInfo : XXUnknownSuperclass {
	NSString* m_nFavorComposeid;
	unsigned long long m_uiTotalFavorAmount;
	unsigned long long m_uiAfterFavorTradeAmount;
	NSArray* m_arrFavItemList;
	unsigned long long m_uiShowFavorAmount;
	unsigned long long m_uiInvariableFavorAmount;
	BOOL m_bIsVariableFavor;
	NSString* m_nsInvariableFavorDesc;
	NSString* m_nsVariableFavorDesc;
}
@property(retain, nonatomic) NSString* m_nsVariableFavorDesc;
@property(retain, nonatomic) NSString* m_nsInvariableFavorDesc;
@property(assign, nonatomic) BOOL m_bIsVariableFavor;
@property(assign, nonatomic) unsigned long long m_uiInvariableFavorAmount;
@property(assign, nonatomic) unsigned long long m_uiShowFavorAmount;
@property(retain, nonatomic) NSArray* m_arrFavItemList;
@property(assign, nonatomic) unsigned long long m_uiAfterFavorTradeAmount;
@property(retain, nonatomic) NSString* m_nFavorComposeid;
@property(assign, nonatomic) unsigned long long m_uiTotalFavorAmount;
-(void).cxx_destruct;
-(void)dealloc;
@end
