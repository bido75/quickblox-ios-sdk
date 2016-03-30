//
//  SettingsCallViewController.h
//  QBRTCChatSemple
//
//  Created by Andrey Ivanov on 11.12.14.
//  Copyright (c) 2014 QuickBlox Team. All rights reserved.
//

#import "BaseViewController.h"

@interface OutgoingCallViewController : BaseViewController

@property (nonatomic, weak) IBOutlet UITableView *tableView;

- (void)accountLogout;

@end
