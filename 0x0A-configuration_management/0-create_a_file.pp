# Create the file /tmp/school with the specified properties
file{'/tmp/school':
    ensure  => 'present',
    owner   => 'www-data',
    group   => 'www-data',
    mode    => '0744',
    content => 'I love Puppet',
}
