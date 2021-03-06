//
//  LocalViewCell.h
//  iPlayer
//
//  Created by Thomas on 15/11/6.
//  Copyright © 2015年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LocalModel;
@interface LocalViewCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@property (nonatomic,strong) LocalModel *myModel;

@property (weak, nonatomic) IBOutlet UIImageView *videoImage;
@property (weak, nonatomic) IBOutlet UILabel *videoName;
@property (weak, nonatomic) IBOutlet UILabel *videoTime;

@end
