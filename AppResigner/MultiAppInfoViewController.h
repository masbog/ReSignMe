//
//  MultiAppInfoViewController.h
//  AppResigner
//
//  Created by Lonny Gomes on 6/22/13.
//  Copyright (c) 2013 Carpe Lucem Media Group. All rights reserved.
//
//  This file is part of ReSignMe.
//
//  ReSignMe is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ReSignMe is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ReSignMe.  If not, see <http://www.gnu.org/licenses/>.

#import <Cocoa/Cocoa.h>

#define kMultiAppInfoTableCellFilename @"AppInfoCellFilename"
#define kMultiAppInfoTableCellDate @"AppInfoCellDate"
#define kMultiAppInfoTableCellFileSize @"AppInfoCellFileSize"
#define kMultiAppInfoTableCellStatus @"AppInfoCellStatus"

@interface MultiAppInfoViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>

- (void)loadIpaFilesList:(NSArray *)ipaFileURLs;
- (void)reset;

@property (weak) IBOutlet NSTableView *ipaTableView;

@end
