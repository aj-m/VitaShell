/*
	VitaShell
	Copyright (C) 2015-2016, TheFloW

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

enum LanguageContainer {
	// General strings
	ERROR,
	OK,
	YES,
	NO,
	CANCEL,
	FILE_,
	FOLDER,

	// Progress strings
	MOVING,
	COPYING,
	DELETING,
	EXPORTING,
	INSTALLING,
	DOWNLOADING,
	EXTRACTING,
	COMPRESSING,
	HASHING,

	// Audio player strings
	TITLE,
	ALBUM,
	ARTIST,
	GENRE,
	YEAR,

	// Hex editor strings
	OFFSET,
	OPEN_HEX_EDITOR,

	// Text editor strings
	EDIT_LINE,
	ENTER_SEARCH_TERM,
	CUT,
	INSERT_EMPTY_LINE,

	// File browser context menu strings
	MORE,
	MARK_ALL,
	UNMARK_ALL,
	MOVE,
	COPY,
	PASTE,
	DELETE,
	RENAME,
	NEW_FOLDER,
	PROPERTIES,
	COMPRESS,
	INSTALL_ALL,
	INSTALL_FOLDER,
	CALCULATE_SHA1,
	EXPORT_MEDIA,
	SEARCH,

	// File browser properties strings
	PROPERTY_NAME,
	PROPERTY_TYPE,
	PROPERTY_SIZE,
	PROPERTY_CONTAINS,
	PROPERTY_CONTAINS_FILES_FOLDERS,
	PROPERTY_CREATION_DATE,
	PROPERTY_MODFICATION_DATE,
	PROPERTY_TYPE_BMP,
	PROPERTY_TYPE_INI,
	PROPERTY_TYPE_JPEG,
	PROPERTY_TYPE_MP3,
	PROPERTY_TYPE_OGG,
	PROPERTY_TYPE_PNG,
	PROPERTY_TYPE_SFO,
	PROPERTY_TYPE_TXT,
	PROPERTY_TYPE_VPK,
	PROPERTY_TYPE_XML,
	PROPERTY_TYPE_ZIP,

	// File browser strings
	COPIED_FILE,
	COPIED_FOLDER,
	COPIED_FILES_FOLDERS,

	// Dialog questions
	DELETE_FILE_QUESTION,
	DELETE_FOLDER_QUESTION,
	DELETE_FILES_FOLDERS_QUESTION,
	EXPORT_FILE_QUESTION,
	EXPORT_FOLDER_QUESTION,
	EXPORT_FILES_FOLDERS_QUESTION,
	EXPORT_NO_MEDIA,
	EXPORT_SONGS_INFO,
	EXPORT_PICTURES_INFO,
	EXPORT_SONGS_PICTURES_INFO,
	INSTALL_ALL_QUESTION,
	INSTALL_FOLDER_QUESTION,
	INSTALL_QUESTION,
	INSTALL_WARNING,
	INSTALL_BRICK_WARNING,
	HASH_FILE_QUESTION,

	// Others
	TOOLBOX,
	SYSINFO_TITLE,
	PLEASE_WAIT,
	SAVE_MODIFICATIONS,
	NO_SPACE_ERROR,
	WIFI_ERROR,
	FTP_SERVER,
	SYS_INFO,
	UPDATE_QUESTION,
	ARCHIVE_NAME,
	COMPRESSION_LEVEL,
	LANGUAGE_CONTRAINER_SIZE,
};

extern char *language_container[LANGUAGE_CONTRAINER_SIZE];

void freeLanguageContainer();
void loadLanguage(int id);

#endif
