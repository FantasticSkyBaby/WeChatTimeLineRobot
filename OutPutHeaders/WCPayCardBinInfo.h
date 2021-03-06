/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDate, NSString, NSArray;

@interface WCPayCardBinInfo : XXUnknownSuperclass <NSCoding> {
	NSString* m_cardBankType;
	NSString* m_cardBankName;
	NSString* m_cardType;
	NSString* m_cardTypeName;
	NSString* m_cardNumber;
	NSString* m_cardLogoUrl;
	NSString* m_bankPhone;
	NSString* m_nsForbidWord;
	NSArray* m_arrSupCredInfo;
	BOOL m_isBankUsable;
	BOOL m_isConfidentTrue;
	BOOL m_needUsrNameInfo;
	BOOL m_needUsrIDInfo;
	BOOL m_needValidDate;
	BOOL m_needCVVNumber;
	BOOL m_needUsrPhoneNumber;
	BOOL m_needPayMoneyAfferBind;
	BOOL m_canBindReturnMoney;
	BOOL m_needFirstName;
	BOOL m_needLastName;
	BOOL m_needCountry;
	BOOL m_needArea;
	BOOL m_needAddress;
	BOOL m_needPhoneNumber;
	BOOL m_needEmail;
	BOOL m_needZip;
	BOOL m_bSupportOfflinePay;
	unsigned long m_cardBankTag;
	unsigned long m_cardAuthMode;
	NSString* m_nsBrandUserName;
	NSString* m_nsBrandTips;
	NSDate* m_ndFetchArriveTime;
	NSString* m_nsAvailableSaveInfo;
	NSString* m_usrName;
	NSString* m_nsFetchArriveTimeWording;
	NSString* _m_arriveType;
}
@property(retain, nonatomic) NSString* m_nsAvailableSaveInfo;
@property(retain, nonatomic) NSString* m_arriveType;
@property(retain, nonatomic) NSString* m_nsFetchArriveTimeWording;
@property(retain, nonatomic) NSDate* m_ndFetchArriveTime;
@property(retain, nonatomic) NSString* m_nsBrandTips;
@property(retain, nonatomic) NSString* m_nsBrandUserName;
@property(assign, nonatomic) unsigned long m_cardAuthMode;
@property(assign, nonatomic) unsigned long m_cardBankTag;
@property(assign, nonatomic) BOOL m_bSupportOfflinePay;
@property(assign, nonatomic) BOOL m_needZip;
@property(assign, nonatomic) BOOL m_needEmail;
@property(assign, nonatomic) BOOL m_needPhoneNumber;
@property(assign, nonatomic) BOOL m_needAddress;
@property(assign, nonatomic) BOOL m_needArea;
@property(assign, nonatomic) BOOL m_needCountry;
@property(assign, nonatomic) BOOL m_needLastName;
@property(assign, nonatomic) BOOL m_needFirstName;
@property(assign, nonatomic) BOOL m_canBindReturnMoney;
@property(assign, nonatomic) BOOL m_needPayMoneyAfferBind;
@property(retain, nonatomic) NSString* m_usrName;
@property(assign, nonatomic) BOOL m_isBankUsable;
@property(assign, nonatomic) BOOL m_needUsrPhoneNumber;
@property(assign, nonatomic) BOOL m_needCVVNumber;
@property(assign, nonatomic) BOOL m_needValidDate;
@property(assign, nonatomic) BOOL m_needUsrIDInfo;
@property(assign, nonatomic) BOOL m_needUsrNameInfo;
@property(assign, nonatomic) BOOL m_isConfidentTrue;
@property(retain, nonatomic) NSArray* m_arrSupCredInfo;
@property(retain, nonatomic) NSString* m_nsForbidWord;
@property(retain, nonatomic) NSString* m_bankPhone;
@property(retain, nonatomic) NSString* m_cardLogoUrl;
@property(retain, nonatomic) NSString* m_cardNumber;
@property(retain, nonatomic) NSString* m_cardTypeName;
@property(retain, nonatomic) NSString* m_cardType;
@property(retain, nonatomic) NSString* m_cardBankName;
@property(retain, nonatomic) NSString* m_cardBankType;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
@end

