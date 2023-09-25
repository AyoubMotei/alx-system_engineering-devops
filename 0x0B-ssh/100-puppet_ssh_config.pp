# Set up server configuration with puppet

file_line{'Set alias name':
  path => '/etc/ssh/ssh_config',
  line => 'ayoub_server
    HostName 100.25.165.189
    User ubuntu
    IdentityFile ~/.ssh/school
    PasswordAuthentication no',
}
